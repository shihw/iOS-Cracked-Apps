//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface GWNewCommunityTitleView : UIView
{
    NSString *_titleStr;
    UIView *_contentView;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)creatSubViews;

@end
