#include "Utils/Utils.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <filesystem>
#include <thread>


int main()
{
    int windowshow = 0;

    Utils utils;

    sf::RenderWindow window(sf::VideoMode(1980,1080), "R6ServerChange", sf::Style::Titlebar | sf::Style::Close);

    sf::Font font;
    std::filesystem::path fontPath = std::filesystem::current_path();
    fontPath.append("ARIAL.TTF");
    if (!font.loadFromFile(fontPath.string()))
    {
        return -1;
    }

    sf::Text titleText("CHOOSE YOUR SERVER", font, 100);
    titleText.setFillColor(sf::Color::Black);
    titleText.setPosition(382.5f,150.f);

    sf::RectangleShape defaultButton(sf::Vector2f(200,60));
    defaultButton.setPosition(492.f,500.f);
    defaultButton.setFillColor(sf::Color::White);
    defaultButton.setOutlineColor(sf::Color::Black);
    defaultButton.setOutlineThickness(10);
    sf::Text defaultText("DEFAULT", font, 20);
    defaultText.setFillColor(sf::Color::Black);
    defaultText.setPosition(545.f,517.5f);

    sf::RectangleShape australiaEastButton(sf::Vector2f(200,60));
    australiaEastButton.setPosition(742.f,500.f);
    australiaEastButton.setFillColor(sf::Color::White);
    australiaEastButton.setOutlineColor(sf::Color::Black);
    australiaEastButton.setOutlineThickness(10);
    sf::Text australiaEastText("EAST AUSTRALIA", font, 20);
    australiaEastText.setFillColor(sf::Color::Black);
    australiaEastText.setPosition(757.5f,517.5f);

    sf::RectangleShape brazilSouthButton(sf::Vector2f(200,60));
    brazilSouthButton.setPosition(992.f,500.f);
    brazilSouthButton.setFillColor(sf::Color::White);
    brazilSouthButton.setOutlineColor(sf::Color::Black);
    brazilSouthButton.setOutlineThickness(10);
    sf::Text brazilSouthText("SOUTH BRAZIL", font, 20);
    brazilSouthText.setFillColor(sf::Color::Black);
    brazilSouthText.setPosition(1020.5f,517.5f);

    sf::RectangleShape unitedstateCentralButton(sf::Vector2f(200,60));
    unitedstateCentralButton.setPosition(1242.f,500.f);
    unitedstateCentralButton.setFillColor(sf::Color::White);
    unitedstateCentralButton.setOutlineColor(sf::Color::Black);
    unitedstateCentralButton.setOutlineThickness(10);
    sf::Text unitedstateCentralText("CENTRAL US", font, 20);
    unitedstateCentralText.setFillColor(sf::Color::Black);
    unitedstateCentralText.setPosition(1279.5f,517.5f);

    sf::RectangleShape asiaEastButton(sf::Vector2f(200,60));
    asiaEastButton.setPosition(492.f,600.f);
    asiaEastButton.setFillColor(sf::Color::White);
    asiaEastButton.setOutlineColor(sf::Color::Black);
    asiaEastButton.setOutlineThickness(10);
    sf::Text asiaEastText("EAST ASIA", font, 20);
    asiaEastText.setFillColor(sf::Color::Black);
    asiaEastText.setPosition(539.5f,617.5f);

    sf::RectangleShape unitedstateEastButton(sf::Vector2f(200,60));
    unitedstateEastButton.setPosition(742.f,600.f);
    unitedstateEastButton.setFillColor(sf::Color::White);
    unitedstateEastButton.setOutlineColor(sf::Color::Black);
    unitedstateEastButton.setOutlineThickness(10);
    sf::Text unitedstateEastText("EAST US", font, 20);
    unitedstateEastText.setFillColor(sf::Color::Black);
    unitedstateEastText.setPosition(797.5f,617.5f);

    sf::RectangleShape japanEastButton(sf::Vector2f(200,60));
    japanEastButton.setPosition(992.f,600.f);
    japanEastButton.setFillColor(sf::Color::White);
    japanEastButton.setOutlineColor(sf::Color::Black);
    japanEastButton.setOutlineThickness(10);
    sf::Text japanEastText("EAST JAPAN", font, 20);
    japanEastText.setFillColor(sf::Color::Black);
    japanEastText.setPosition(1030.5f,617.5f);

    sf::RectangleShape europeNorthButton(sf::Vector2f(200,60));
    europeNorthButton.setPosition(1242.f,600.f);
    europeNorthButton.setFillColor(sf::Color::White);
    europeNorthButton.setOutlineColor(sf::Color::Black);
    europeNorthButton.setOutlineThickness(10);
    sf::Text europeNorthText("NORTH EUROPE", font, 20);
    europeNorthText.setFillColor(sf::Color::Black);
    europeNorthText.setPosition(1262.5f,617.5f);

    sf::RectangleShape africaButton(sf::Vector2f(200,60));
    africaButton.setPosition(492.f,700.f);
    africaButton.setFillColor(sf::Color::White);
    africaButton.setOutlineColor(sf::Color::Black);
    africaButton.setOutlineThickness(10);
    sf::Text africaText("AFRICA", font, 20);
    africaText.setFillColor(sf::Color::Black);
    africaText.setPosition(549.5f,717.5f);

    sf::RectangleShape unitedstateSouthCentralButton(sf::Vector2f(200,60));
    unitedstateSouthCentralButton.setPosition(742.f,700.f);
    unitedstateSouthCentralButton.setFillColor(sf::Color::White);
    unitedstateSouthCentralButton.setOutlineColor(sf::Color::Black);
    unitedstateSouthCentralButton.setOutlineThickness(10);
    sf::Text unitedstateSouthCentralText("SOUTH-CENTRAL US", font, 18);
    unitedstateSouthCentralText.setFillColor(sf::Color::Black);
    unitedstateSouthCentralText.setPosition(752.5f,717.5f);

    sf::RectangleShape asiaSouthEastButton(sf::Vector2f(200,60));
    asiaSouthEastButton.setPosition(992.f,700.f);
    asiaSouthEastButton.setFillColor(sf::Color::White);
    asiaSouthEastButton.setOutlineColor(sf::Color::Black);
    asiaSouthEastButton.setOutlineThickness(10);
    sf::Text asiaSouthEastText("SOUTH-EAST ASIA", font, 18);
    asiaSouthEastText.setFillColor(sf::Color::Black);
    asiaSouthEastText.setPosition(1012.5f,717.5f);

    sf::RectangleShape uaeNorthButton(sf::Vector2f(200,60));
    uaeNorthButton.setPosition(1242.f,700.f);
    uaeNorthButton.setFillColor(sf::Color::White);
    uaeNorthButton.setOutlineColor(sf::Color::Black);
    uaeNorthButton.setOutlineThickness(10);
    sf::Text uaeNorthText("NORTH UAE", font, 20);
    uaeNorthText.setFillColor(sf::Color::Black);
    uaeNorthText.setPosition(1280.5f,717.5f);

    sf::RectangleShape europeWestButton(sf::Vector2f(200,60));
    europeWestButton.setPosition(742.f,800.f);
    europeWestButton.setFillColor(sf::Color::White);
    europeWestButton.setOutlineColor(sf::Color::Black);
    europeWestButton.setOutlineThickness(10);
    sf::Text europeWestText("WEST EUROPE", font, 20);
    europeWestText.setFillColor(sf::Color::Black);
    europeWestText.setPosition(767.5f,817.5f);

    sf::RectangleShape unitedstateWestButton(sf::Vector2f(200,60));
    unitedstateWestButton.setPosition(992.f,800.f);
    unitedstateWestButton.setFillColor(sf::Color::White);
    unitedstateWestButton.setOutlineColor(sf::Color::Black);
    unitedstateWestButton.setOutlineThickness(10);
    sf::Text unitedstateWestText("WEST US", font, 20);
    unitedstateWestText.setFillColor(sf::Color::Black);
    unitedstateWestText.setPosition(1045.5f,817.5f);

    sf::RectangleShape restartButton(sf::Vector2f(300,90));
    restartButton.setPosition(822.f,470.f);
    restartButton.setFillColor(sf::Color::White);
    restartButton.setOutlineColor(sf::Color::Black);
    restartButton.setOutlineThickness(10);
    sf::Text restartText("RESTART R6", font, 40);
    restartText.setFillColor(sf::Color::Black);
    restartText.setPosition(850.f,487.5f);

    sf::RectangleShape startButton(sf::Vector2f(300,90));
    startButton.setPosition(822.f,470.f);
    startButton.setFillColor(sf::Color::White);
    startButton.setOutlineColor(sf::Color::Black);
    startButton.setOutlineThickness(10);
    sf::Text startText("START R6", font, 40);
    startText.setFillColor(sf::Color::Black);
    startText.setPosition(875.f,487.5f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if(event.mouseButton.button == sf::Mouse::Left) {
                    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                    if (windowshow == 0)
                    {
                        if (defaultButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            defaultButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (australiaEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            australiaEastButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (brazilSouthButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            brazilSouthButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (unitedstateCentralButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateCentralButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (asiaEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            asiaEastButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (unitedstateEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateEastButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (japanEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            japanEastButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (europeNorthButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            europeNorthButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (africaButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            africaButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (unitedstateSouthCentralButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateSouthCentralButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (asiaSouthEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            asiaSouthEastButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (uaeNorthButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            uaeNorthButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (europeWestButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            europeWestButton.setFillColor(sf::Color(240, 240, 240));
                        }else if (unitedstateWestButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateWestButton.setFillColor(sf::Color(240, 240, 240));
                        }
                    }else{
                        if(utils.isRunning())
                        {
                            if (restartButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                            {
                                restartButton.setFillColor(sf::Color(240, 240, 240));
                            }
                        }else{
                            if (startButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                            {
                                startButton.setFillColor(sf::Color(240, 240, 240));
                            }
                        }
                    }
                }
            }
            if (event.type == sf::Event::MouseButtonReleased)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                    if (windowshow == 0)
                    {
                        if (defaultButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            defaultButton.setFillColor(sf::Color::White);
                            utils.setServer("default");
                            windowshow = 1;
                        }else if (australiaEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            australiaEastButton.setFillColor(sf::Color::White);
                            utils.setServer("australiaeast");
                            windowshow = 1;
                        }else if (brazilSouthButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            brazilSouthButton.setFillColor(sf::Color::White);
                            utils.setServer("brazilsouth");
                            windowshow = 1;
                        }else if (unitedstateCentralButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateCentralButton.setFillColor(sf::Color::White);
                            utils.setServer("centralus");
                            windowshow = 1;
                        }else if (asiaEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            asiaEastButton.setFillColor(sf::Color::White);
                            utils.setServer("eastasia");
                            windowshow = 1;
                        }else if (unitedstateEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateEastButton.setFillColor(sf::Color::White);
                            utils.setServer("eastus");
                            windowshow = 1;
                        }else if (japanEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            japanEastButton.setFillColor(sf::Color::White);
                            utils.setServer("japaneast");
                            windowshow = 1;
                        }else if (europeNorthButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            europeNorthButton.setFillColor(sf::Color::White);
                            utils.setServer("northeurope");
                            windowshow = 1;
                        }else if (africaButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            africaButton.setFillColor(sf::Color::White);
                            utils.setServer("southafricanorth");
                            windowshow = 1;
                        }else if (unitedstateSouthCentralButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateSouthCentralButton.setFillColor(sf::Color::White);
                            utils.setServer("southcentralus");
                            windowshow = 1;
                        }else if (asiaSouthEastButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            asiaSouthEastButton.setFillColor(sf::Color::White);
                            utils.setServer("southeastasia");
                            windowshow = 1;
                        }else if (uaeNorthButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            uaeNorthButton.setFillColor(sf::Color::White);
                            utils.setServer("uaenorth");
                            windowshow = 1;
                        }else if (europeWestButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            europeWestButton.setFillColor(sf::Color::White);
                            utils.setServer("westeurope");
                            windowshow = 1;
                        }else if (unitedstateWestButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                        {
                            unitedstateWestButton.setFillColor(sf::Color::White);
                            utils.setServer("westus");
                            windowshow = 1;
                        }
                    }else{
                        if (utils.isRunning())
                        {
                            if (restartButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                            {
                                restartButton.setFillColor(sf::Color::White);
                                utils.closeR6();
                                utils.openR6();
                                window.close();
                            }
                        }else{
                            if (startButton.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
                            {
                                startButton.setFillColor(sf::Color::White);
                                utils.openR6();
                                window.close();
                            }
                        }
                    }
                }
            }
        }

        window.clear(sf::Color::White);

        if(windowshow == 0)
        {
            window.draw(titleText);
            window.draw(defaultButton);
            window.draw(defaultText);
            window.draw(australiaEastButton);
            window.draw(australiaEastText);
            window.draw(brazilSouthButton);
            window.draw(brazilSouthText);
            window.draw(unitedstateCentralButton);
            window.draw(unitedstateCentralText);
            window.draw(asiaEastButton);
            window.draw(asiaEastText);
            window.draw(unitedstateEastButton);
            window.draw(unitedstateEastText);
            window.draw(japanEastButton);
            window.draw(japanEastText);
            window.draw(europeNorthButton);
            window.draw(europeNorthText);
            window.draw(africaButton);
            window.draw(africaText);
            window.draw(unitedstateSouthCentralButton);
            window.draw(unitedstateSouthCentralText);
            window.draw(asiaSouthEastButton);
            window.draw(asiaSouthEastText);
            window.draw(uaeNorthButton);
            window.draw(uaeNorthText);
            window.draw(europeWestButton);
            window.draw(europeWestText);
            window.draw(unitedstateWestButton);
            window.draw(unitedstateWestText);
        }else{
            if (utils.isRunning())
            {
                window.draw(restartButton);
                window.draw(restartText);
            }else{
                window.draw(startButton);
                window.draw(startText);
            }
        }

        window.display();
    }

    return 0;
}