//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSuggestionSearcher.h"

#import "QMSSearchDelegate.h"

@class MMSuggestionSearchTupleManager, NSString, QMSSearcher;

@interface MMTencentSuggestionSearcher : MMSuggestionSearcher <QMSSearchDelegate>
{
    QMSSearcher *_searcher;
    MMSuggestionSearchTupleManager *_processingRequests;
}

@property(retain, nonatomic) MMSuggestionSearchTupleManager *processingRequests; // @synthesize processingRequests=_processingRequests;
@property(retain, nonatomic) QMSSearcher *searcher; // @synthesize searcher=_searcher;
- (void).cxx_destruct;
- (void)notifyWalkingSearchWithOption:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)searchWithSuggestionSearchOption:(id)arg1 didReceiveResult:(id)arg2;
- (void)searchWithSearchOption:(id)arg1 didFailWithError:(id)arg2;
- (void)suggestionSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

