/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, WLKContinueWatchingCollection;

@interface WLKContinueWatchingResponse : NSObject {

	NSArray* _items;
	WLKContinueWatchingCollection* _featured;

}

@property (nonatomic,copy,readonly) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) WLKContinueWatchingCollection * featured;              //@synthesize featured=_featured - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)items;
-(WLKContinueWatchingCollection *)featured;
@end

