//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSURL;

@interface UIImageView (TTCache)
- (void)tt_setImageWithModel:(id)arg1;
- (void)tt_setImageWithModel:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)tt_setImageWithModel:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)tt_setImageWithModel:(id)arg1 placeholderImage:(id)arg2;
- (void)tt_setImageWithModel:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)_tt_setImageWithModel:(id)arg1 index:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)tt_setImageWithURL:(id)arg1;
- (void)tt_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)tt_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)_tt_setImageWithURL:(id)arg1 uri:(id)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)tt_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSURL *tt_imageURL;
@end

