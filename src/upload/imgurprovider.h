/*
 * LXImage-Qt - a simple and fast image viewer
 * Copyright (C) 2013  PCMan <pcman.tw@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifndef LXIMAGE_IMGURPROVIDER_H
#define LXIMAGE_IMGURPROVIDER_H

#include "provider.h"

namespace LxImage {

/**
 * @brief Create uploads to Imgur's API
 */
class ImgurProvider : public Provider
{
    Q_OBJECT

public:
    ImgurProvider(QObject *parent = nullptr);

    virtual Upload *upload(QIODevice *device);
};

}

#endif // LXIMAGE_IMGURPROVIDER_H
