//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIButton, UILabel, UIView;

@interface QYProductCell_Pad : UITableViewCell
{
    double _cellWidth;
    UILabel *_newTitleLabel;
    UIButton *_btnBuy;
    UIButton *_promotionalBtn;
    UILabel *_currentPriceLabel;
    UILabel *_orginePriceLabel;
    UIView *_orgineLineview;
    UILabel *_promotionalLabel;
    UILabel *_tipsAutoRenewLabel;
    UIView *_bgview;
    UIButton *_autoRenewDecBtn;
    NSDictionary *_productDic;
    UILabel *_promotionalNewLabel;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showAutoRenewDec;
- (void)reloadData:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3;
- (void)dealloc;

@end

