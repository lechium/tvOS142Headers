/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFMailboxPredictorDiagnostics.h>

@class NSString, NSDictionary;

@interface _MFMailboxPredictorDiagnostics : NSObject <MFMailboxPredictorDiagnostics> {

	NSString* _debugOutput;
	NSDictionary* _modelInfo;

}

@property (nonatomic,retain) NSString * debugOutput;                //@synthesize debugOutput=_debugOutput - In the implementation block
@property (nonatomic,retain) NSDictionary * modelInfo;              //@synthesize modelInfo=_modelInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDebugOutput:(id)arg1 ;
-(id)initWithDebugOutput:(id)arg1 modelInfo:(id)arg2 ;
-(void)setDebugOutput:(NSString *)arg1 ;
-(void)setModelInfo:(NSDictionary *)arg1 ;
-(NSString *)debugOutput;
-(NSDictionary *)modelInfo;
@end

