/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTLCommandBufferEncoderInfo.h>

@class NSString, NSArray;

@interface _MTLCommandBufferEncoderInfo : NSObject <MTLCommandBufferEncoderInfo> {

	unsigned long long _uniqueID;
	unsigned long long _globalTraceObjectID;
	NSString* _label;
	NSArray* _debugSignposts;
	long long _errorState;

}

@property (assign,nonatomic) unsigned long long uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (nonatomic,retain) NSString * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * debugSignposts;                            //@synthesize debugSignposts=_debugSignposts - In the implementation block
@property (assign,nonatomic) long long errorState;                                //@synthesize errorState=_errorState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)uniqueID;
-(NSString *)label;
-(unsigned long long)globalTraceObjectID;
-(void)setLabel:(NSString *)arg1 ;
-(void)setUniqueID:(unsigned long long)arg1 ;
-(void)setDebugSignposts:(NSArray *)arg1 ;
-(void)setErrorState:(long long)arg1 ;
-(long long)errorState;
-(NSArray *)debugSignposts;
-(void)setGlobalTraceObjectID:(unsigned long long)arg1 ;
@end

