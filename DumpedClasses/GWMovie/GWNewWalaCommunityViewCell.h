//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GWNewWalaCommunityView;

@interface GWNewWalaCommunityViewCell : UITableViewCell
{
    _Bool _isNeedRelationBtn;
    id _delegate;
    GWNewWalaCommunityView *_walaView;
}

@property(nonatomic) _Bool isNeedRelationBtn; // @synthesize isNeedRelationBtn=_isNeedRelationBtn;
@property(retain, nonatomic) GWNewWalaCommunityView *walaView; // @synthesize walaView=_walaView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configCellWithComment:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
