//
//  SDWebImage.h
//  SDWebImage
//
//  Created by 宋庆功 on 2016/12/24.
//  Copyright © 2016年 思源. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for SDWebImage.
FOUNDATION_EXPORT double SDWebImageVersionNumber;

//! Project version string for SDWebImage.
FOUNDATION_EXPORT const unsigned char SDWebImageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SDWebImage/PublicHeader.h>

#import <SDWebImage/SDWebImageManager.h>
#import <SDWebImage/SDImageCacheConfig.h>
#import <SDWebImage/SDImageCache.h>
#import <SDWebImage/UIView+WebCache.h>
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/UIImageView+HighlightedWebCache.h>
#import <SDWebImage/SDWebImageDownloaderOperation.h>
#import <SDWebImage/UIButton+WebCache.h>
#import <SDWebImage/SDWebImagePrefetcher.h>
#import <SDWebImage/UIView+WebCacheOperation.h>
#import <SDWebImage/UIImage+MultiFormat.h>
#import <SDWebImage/SDWebImageOperation.h>
#import <SDWebImage/SDWebImageDownloader.h>
#if SD_MAC || SD_UIKIT
#import <SDWebImage/MKAnnotationView+WebCache.h>
#endif
#import <SDWebImage/SDWebImageDecoder.h>
#import <SDWebImage/UIImage+WebP.h>
#import <SDWebImage/UIImage+GIF.h>
#import <SDWebImage/NSData+ImageContentType.h>
#if SD_MAC
#import <SDWebImage/NSImage+WebCache.h>
#endif
#if SD_UIKIT
#import <SDWebImage/FLAnimatedImageView+WebCache.h>
#endif
