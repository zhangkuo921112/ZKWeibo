//
//  UIImageView+MLBSDImageLoader.h
//  MyOne3
//
//  Created by meilbn on 2/21/16.
//  Copyright © 2016 meilbn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (ZKSDImageLoader)

- (void)zk_sd_setImageWithURL:(NSString *)url placeholderImageName:(NSString *)placeholderImageName;

- (void)zk_sd_setImageWithURL:(NSString *)url placeholderImageName:(NSString *)placeholderImageName cachePlachoderImage:(BOOL)cachePlachoderImage;

@end
