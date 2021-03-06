//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTTrainBuPiaoResultInfo, CTTrainLabel, UIButton, UIImageView, UILabel, UIView;

@interface CTTrainBuPiaoListCell : CTCustomeGroupTableViewCell
{
    _Bool _showSuggustion;
    id <CTTrainBuPiaoListCellDelegate> _delegate;
    CTTrainBuPiaoResultInfo *_plan;
    CTTrainLabel *_labelSuggestion;
    UIView *_viewContainerMiddle;
    UIImageView *_imageViewLine1;
    UIImageView *_imageViewLine2;
    UILabel *_labelTicketNumber;
    UILabel *_labelFirstStation;
    UILabel *_labelSecondStation;
    UILabel *_labelThirdStation;
    UILabel *_labelSeat;
    UILabel *_labelDetail;
    UIButton *_buttonOrder;
    UILabel *_labelFirstExplain;
    UILabel *_labelSecondExplain;
}

+ (double)heightOfCellWithSuggestion:(id)arg1;
@property(retain, nonatomic) UILabel *labelSecondExplain; // @synthesize labelSecondExplain=_labelSecondExplain;
@property(retain, nonatomic) UILabel *labelFirstExplain; // @synthesize labelFirstExplain=_labelFirstExplain;
@property(retain, nonatomic) UIButton *buttonOrder; // @synthesize buttonOrder=_buttonOrder;
@property(retain, nonatomic) UILabel *labelDetail; // @synthesize labelDetail=_labelDetail;
@property(retain, nonatomic) UILabel *labelSeat; // @synthesize labelSeat=_labelSeat;
@property(retain, nonatomic) UILabel *labelThirdStation; // @synthesize labelThirdStation=_labelThirdStation;
@property(retain, nonatomic) UILabel *labelSecondStation; // @synthesize labelSecondStation=_labelSecondStation;
@property(retain, nonatomic) UILabel *labelFirstStation; // @synthesize labelFirstStation=_labelFirstStation;
@property(retain, nonatomic) UILabel *labelTicketNumber; // @synthesize labelTicketNumber=_labelTicketNumber;
@property(retain, nonatomic) UIImageView *imageViewLine2; // @synthesize imageViewLine2=_imageViewLine2;
@property(retain, nonatomic) UIImageView *imageViewLine1; // @synthesize imageViewLine1=_imageViewLine1;
@property(retain, nonatomic) UIView *viewContainerMiddle; // @synthesize viewContainerMiddle=_viewContainerMiddle;
@property(retain, nonatomic) CTTrainLabel *labelSuggestion; // @synthesize labelSuggestion=_labelSuggestion;
@property(nonatomic) _Bool showSuggustion; // @synthesize showSuggustion=_showSuggustion;
@property(retain, nonatomic) CTTrainBuPiaoResultInfo *plan; // @synthesize plan=_plan;
@property(nonatomic) __weak id <CTTrainBuPiaoListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onOrderButton:(id)arg1;
- (void)setupContent;
- (id)suggestionHtml;
- (id)suggestionText;
- (void)awakeFromNib;

@end

