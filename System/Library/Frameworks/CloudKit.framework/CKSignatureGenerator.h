/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)isValidSignature:(id)arg1 ;
+(id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
+(BOOL)isValidV2Signature:(id)arg1 ;
+(id)signatureForStreamingAsset;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)setValid:(BOOL)arg1 ;
-(void*)generator;
-(char*)_newSignatureByFinishingGenerator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)updateWithData:(id)arg1 ;
-(id)dataByFinishingSignature;
-(void)setGenerator:(void*)arg1 ;
@end
