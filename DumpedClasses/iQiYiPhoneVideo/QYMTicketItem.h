//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@interface QYMTicketItem : NSObject
{
    int _pageType;
    NSString *_gateway;
    NSString *_cinemaID;
    NSString *_movieID;
    NSString *_orderID;
    NSString *_expCard;
    UIViewController *_parentVC;
}

@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) int pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *expCard; // @synthesize expCard=_expCard;
@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) NSString *movieID; // @synthesize movieID=_movieID;
@property(retain, nonatomic) NSString *cinemaID; // @synthesize cinemaID=_cinemaID;
@property(retain, nonatomic) NSString *gateway; // @synthesize gateway=_gateway;
- (void).cxx_destruct;

@end

