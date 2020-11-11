/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsKit/MTBaseQueryObserver.h>

@class NSSet, NSArray;

@interface MTUuidQueryObserver : MTBaseQueryObserver {

	NSSet* _uuidSet;
	NSArray* _uuidOrder;

}

@property (nonatomic,retain) NSSet * uuidSet;                  //@synthesize uuidSet=_uuidSet - In the implementation block
@property (nonatomic,retain) NSArray * uuidOrder;              //@synthesize uuidOrder=_uuidOrder - In the implementation block
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)notifyObservers;
-(void)startObserving;
-(id)addResultsChangedHandler:(/*^block*/id)arg1 ;
-(NSArray *)uuidOrder;
-(NSSet *)uuidSet;
-(void)setUuidSet:(NSSet *)arg1 ;
-(void)setUuidOrder:(NSArray *)arg1 ;
@end

