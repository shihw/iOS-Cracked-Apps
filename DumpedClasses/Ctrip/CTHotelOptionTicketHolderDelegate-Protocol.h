//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTPassengerModel;

@protocol CTHotelOptionTicketHolderDelegate <NSObject>

@optional
- (void)deleteTicketHolder:(CTPassengerModel *)arg1 index:(long long)arg2;
- (void)editTicketHolder:(CTPassengerModel *)arg1 index:(long long)arg2;
- (void)addTicketHolder;
@end

