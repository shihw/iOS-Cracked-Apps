//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UILabel;

@interface CTTrain12306ResignPassengerCell : CTCustomeGroupTableViewCell
{
    UILabel *_labelName;
    UILabel *_labelPassengerType;
    UILabel *_labelId;
    UILabel *_labelSeat;
    UILabel *_labelPrice;
    UILabel *_labelYuan;
}

@property(retain, nonatomic) UILabel *labelYuan; // @synthesize labelYuan=_labelYuan;
@property(retain, nonatomic) UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(retain, nonatomic) UILabel *labelSeat; // @synthesize labelSeat=_labelSeat;
@property(retain, nonatomic) UILabel *labelId; // @synthesize labelId=_labelId;
@property(retain, nonatomic) UILabel *labelPassengerType; // @synthesize labelPassengerType=_labelPassengerType;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
- (void).cxx_destruct;
- (void)setupContentWithName:(id)arg1 passengerType:(id)arg2 id:(id)arg3 seat:(id)arg4 price:(id)arg5;
- (void)awakeFromNib;

@end

