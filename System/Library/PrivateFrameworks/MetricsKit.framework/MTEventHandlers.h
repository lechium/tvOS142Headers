/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>

@class MTBaseEventDataProvider, NSMutableDictionary;

@interface MTEventHandlers : MTObject {

	MTBaseEventDataProvider* _base;
	NSMutableDictionary* _registrations;

}

@property (nonatomic,retain) MTBaseEventDataProvider * base;                   //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrations;              //@synthesize registrations=_registrations - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSMutableDictionary *)registrations;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(void)setBase:(MTBaseEventDataProvider *)arg1 ;
-(MTBaseEventDataProvider *)base;
-(void)registerEventHandlerName:(id)arg1 eventHandlerClass:(Class)arg2 ;
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
-(void)registerEventHandlerName:(id)arg1 eventHandlerClass:(Class)arg2 eventData:(id)arg3 ;
-(void)registerEventHandlerName:(id)arg1 eventData:(id)arg2 ;
@end

