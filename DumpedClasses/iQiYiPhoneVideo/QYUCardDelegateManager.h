//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYUCardBaseCellDelegate-Protocol.h"

@class NSString, QYPlayerController, UITableView;

@interface QYUCardDelegateManager : NSObject <QYUCardBaseCellDelegate>
{
    UITableView *_cardTableView;
    QYPlayerController *_playerController;
}

- (void).cxx_destruct;
- (void)adClickedWithCellInfo:(id)arg1 andType:(long long)arg2;
- (id)initWithTableView:(id)arg1 andPlayerController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

