//
//  ResourceIdentifiers.h
//  SpaceWars
//
//  Created by Bobby Lei on 5/05/16.
//  Copyright (c) 2016 mebobby. All rights reserved.
//

#ifndef __SpaceWars__ResourceIdentifiers__
#define __SpaceWars__ResourceIdentifiers__

namespace sf
{
    class Texture;
}

namespace Textures
{
    enum ID
    {
        Eagle,
        Rapter,
    };
}

template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;;

#endif /* defined(__SpaceWars__ResourceIdentifiers__) */
