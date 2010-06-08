/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "MediaPlayer-Structs.h"

@class UIImage;

@interface MPArtworkInfo : NSObject {
	UIImage* _image;
	CGRect _imageSubRect;
	double _time;
}
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) CGRect imageSubRect;
@property(assign, nonatomic) double time;
+(id)artworkInfoWithImage:(id)image rect:(CGRect)rect time:(double)time;
-(void)dealloc;
@end
