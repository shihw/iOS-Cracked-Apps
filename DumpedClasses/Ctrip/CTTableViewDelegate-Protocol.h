//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTableView;

@protocol CTTableViewDelegate <NSObject>

@optional
- (void)pullDownToRefreshWillBegin:(CTTableView *)arg1;
- (void)pullUpToAddData:(CTTableView *)arg1;
- (void)pullDownToRefreshData:(CTTableView *)arg1;
@end

