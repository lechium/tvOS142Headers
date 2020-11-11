/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MDSearchQueryDelegate;
@class NSPredicate, NSDictionary;

@interface MDSearchQuery : NSObject {

	NSPredicate* _predicate;
	NSDictionary* _options;
	unsigned long long _status;
	id<MDSearchQueryDelegate> _delegate;

}

@property (copy,readonly) NSPredicate * predicate;                  //@synthesize predicate=_predicate - In the implementation block
@property (copy,readonly) NSDictionary * options;                   //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long status;                     //@synthesize status=_status - In the implementation block
@property (__weak) id<MDSearchQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<MDSearchQueryDelegate>)delegate;
-(void)setDelegate:(id<MDSearchQueryDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(NSDictionary *)options;
-(NSPredicate *)predicate;
-(unsigned long long)status;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 options:(id)arg2 ;
@end
