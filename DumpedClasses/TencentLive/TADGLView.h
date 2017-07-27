//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OpenGLView.h"

@interface TADGLView : OpenGLView
{
    struct __CVOpenGLESTextureCache *videoTextureCache;
    unsigned int displayProgram;
}

- (void)setCurrentGLContext;
- (void)prepareForBackground;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1;
- (struct CGRect)textureSamplingRectForCroppingTextureWithAspectRatio:(struct CGSize)arg1 toAspectRatio:(struct CGSize)arg2;
- (void)renderWithSquareVertices:(const float *)arg1 textureVertices:(const float *)arg2;
- (void)initializeVideoCache;
- (void)initializeDisplayProgram;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
