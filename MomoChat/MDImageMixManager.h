//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface MDImageMixManager : NSObject
{
    int _imageWidth;
    int _imageHeight;
    int _lastX;
    UIImage *_image1;
    UIImage *_image2;
    struct __CVBuffer *_leftBuffer;
    struct __CVBuffer *_rightBuffer;
    struct __CVBuffer *_pixelBuffer;
}

@property(nonatomic) int lastX; // @synthesize lastX=_lastX;
@property(nonatomic) int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) struct __CVBuffer *rightBuffer; // @synthesize rightBuffer=_rightBuffer;
@property(nonatomic) struct __CVBuffer *leftBuffer; // @synthesize leftBuffer=_leftBuffer;
@property(retain, nonatomic) UIImage *image2; // @synthesize image2=_image2;
@property(retain, nonatomic) UIImage *image1; // @synthesize image1=_image1;
- (id)bufferToImage:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)flipImageBy:(int)arg1;
- (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1;
- (id)getImageWithPointX:(int)arg1;
- (void)setRightImage:(id)arg1;
- (void)setLeftImage:(id)arg1;
- (void)initPixelBuffer;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2;

@end
