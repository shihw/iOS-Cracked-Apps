//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol QYSegmentViewDelegate;

@protocol QYSegmentViewProtocol <NSObject>
@property(readonly, nonatomic) long long numOfSegments;
@property(nonatomic) long long selectedIndex;
@property(nonatomic) __weak id <QYSegmentViewDelegate> delegate;
- (void)scrollBetweenPage:(long long)arg1 andPage:(long long)arg2 percent:(double)arg3;
@end

