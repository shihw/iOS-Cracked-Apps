//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GWScoreTaskItem, UIImageView, UILabel;

@interface ScoreCell : UITableViewCell
{
    UIImageView *_usedIconImageView;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_scoreLabel;
    UIImageView *_coinImageView;
    GWScoreTaskItem *_currentTaskItem;
    double _maxTextWidth;
}

@property(nonatomic) double maxTextWidth; // @synthesize maxTextWidth=_maxTextWidth;
@property(retain, nonatomic) GWScoreTaskItem *currentTaskItem; // @synthesize currentTaskItem=_currentTaskItem;
@property(retain, nonatomic) UIImageView *coinImageView; // @synthesize coinImageView=_coinImageView;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *usedIconImageView; // @synthesize usedIconImageView=_usedIconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCellWithData:(id)arg1 maxWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

