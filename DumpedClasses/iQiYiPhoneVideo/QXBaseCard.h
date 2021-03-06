//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QXCardCellProtocol-Protocol.h"

@class NSString, QXCardData;
@protocol QXBaseCardDelegate;

@interface QXBaseCard : UITableViewCell <QXCardCellProtocol>
{
    QXCardData *_cardData;
    id <QXBaseCardDelegate> _delegate;
    long long _selectedItemIndex;
    long long _section;
}

+ (Class)dataClass;
+ (id)cardWithTableView:(id)arg1 cardData:(id)arg2;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(nonatomic) __weak id <QXBaseCardDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QXCardData *cardData; // @synthesize cardData=_cardData;
- (void).cxx_destruct;
- (id)placeholderWithWidth:(double)arg1;
- (void)exchange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

