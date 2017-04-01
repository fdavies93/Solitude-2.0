#include "SolitudeHeaders.h"
#include "GraphicsStorage.h"
#include "GraphicsMessageQueue.h"
#include "GraphicsLoader.h"
#include "GraphicsCache.h"

int main()
{
	GraphicsCache cache;
	sf::Sprite sprite;
	cache.CacheTexture("data/bbc-basic.jpg");
	while (cache.GetTexture("data/bbc-basic.jpg").usedBy == -1)
	{
		cache.Update();
	}
	sprite.setTexture(*cache.GetTexture("data/bbc-basic.jpg").texture, true);
	sprite.setScale(sf::Vector2f(0.15, 0.15));
	sprite.setPosition(sf::Vector2f(0, 50));

	sf::RenderWindow window(sf::VideoMode(500, 500), "Test Window");
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		sprite.setScale(sprite.getScale() + sf::Vector2f(0.0001,0.0001));
		window.draw(sprite);
		window.display();
	}
	return 0;
}

/*nice test of loader

GraphicsLoader loader;
loader.Start();
loader.LoadTexture("data/bbc-basic.jpg");
std::queue<GraphicsMessage> messages;
sf::Sprite sprite;
while (messages.size() < 1)
{
messages = loader.GetOutputMessages();
}
if (messages.front().type == GRAPHICS_MESSAGE_TYPES::MESSAGE_FINISHED_CACHING)
{
sprite.setTexture(messages.front().message.texture, true);
sprite.setScale(sf::Vector2f(0.15,0.15));
sprite.setPosition(sf::Vector2f(0,50));
}

sf::RenderWindow window(sf::VideoMode(500, 500), "Test Window");
while (window.isOpen())
{
sf::Event event;
while (window.pollEvent(event))
{
if (event.type == sf::Event::Closed)
window.close();
}
window.clear();

window.draw(sprite);

window.display();
}
*/