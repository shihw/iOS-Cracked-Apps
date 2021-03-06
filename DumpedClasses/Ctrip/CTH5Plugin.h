//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTH5ViewController, CTH5WebView;

@interface CTH5Plugin : NSObject
{
    CTH5ViewController *_h5ViewController;
    CTH5WebView *_h5WebView;
}

@property(nonatomic) __weak CTH5WebView *h5WebView; // @synthesize h5WebView=_h5WebView;
@property(nonatomic) __weak CTH5ViewController *h5ViewController; // @synthesize h5ViewController=_h5ViewController;
- (void).cxx_destruct;
- (void)clear;
- (void)callBackH5WithTagName:(id)arg1 errorCode:(id)arg2 param:(id)arg3;
- (void)callBackH5WithTagName:(id)arg1 param:(id)arg2;
- (id)initWithH5WebView:(id)arg1;
- (id)initWithH5ViewController:(id)arg1;

@end

