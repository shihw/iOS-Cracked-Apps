//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface CTIntFlightDeliveryInvoiceTypeCellModel : NSObject
{
    _Bool _isToShowHintIcon;
    _Bool _isSelectionEnabled;
    NSString *_titleLabelText;
    NSAttributedString *_contentLabelText;
}

@property(nonatomic) _Bool isSelectionEnabled; // @synthesize isSelectionEnabled=_isSelectionEnabled;
@property(nonatomic) _Bool isToShowHintIcon; // @synthesize isToShowHintIcon=_isToShowHintIcon;
@property(retain, nonatomic) NSAttributedString *contentLabelText; // @synthesize contentLabelText=_contentLabelText;
@property(retain, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
- (void).cxx_destruct;
- (id)init;

@end

