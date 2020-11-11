/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMStateCaptureAssistant : NSObject {

	unsigned long long _handle;

}

@property (assign,nonatomic) unsigned long long handle;              //@synthesize handle=_handle - In the implementation block
+(unsigned long long)registerStateCaptureBlockWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)handle;
-(void)setHandle:(unsigned long long)arg1 ;
-(void)deregister;
-(id)initWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3 ;
@end

