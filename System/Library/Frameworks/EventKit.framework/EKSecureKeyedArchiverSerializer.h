/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EKSerializer.h>

@class EKEventStore, NSString;

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer> {

	EKEventStore* _eventStore;
	NSString* _version;

}

@property (nonatomic,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) NSString * version;                     //@synthesize version=_version - In the implementation block
-(NSString *)version;
-(EKEventStore *)eventStore;
-(id)serializeEvent:(id)arg1 error:(id*)arg2 ;
-(id)deserializeData:(id)arg1 error:(id*)arg2 ;
-(id)versionFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithEventStore:(id)arg1 withVersion:(id)arg2 ;
@end

