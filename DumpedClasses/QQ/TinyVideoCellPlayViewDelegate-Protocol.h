//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQAIOTinyVideoCellPlayView;

@protocol TinyVideoCellPlayViewDelegate <NSObject>
- (_Bool)tinyVideoCellPlayViewShouldPlay:(QQAIOTinyVideoCellPlayView *)arg1;

@optional
- (void)tinyVideoCellPlayViewPlayStatusChange:(unsigned long long)arg1;
- (void)tinyVideoCellPlayViewPlayUnmutedBegin;
- (void)tinyVideoCellPlayViewPlayUnmutedComplete:(_Bool)arg1;
- (_Bool)tinyVideoCellPlayViewShouldPlayUnmuted:(QQAIOTinyVideoCellPlayView *)arg1;
@end

