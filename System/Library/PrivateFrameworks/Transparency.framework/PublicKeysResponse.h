/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSDictionary, NSMutableArray, NSData, Signature, PatInclusionProof, LogEntry;

@interface PublicKeysResponse : GPBMessage

@property (readonly) NSDictionary * metadata; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * appLeafsArray; 
@property (nonatomic,readonly) unsigned long long appLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * tltLeafsArray; 
@property (nonatomic,readonly) unsigned long long tltLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * intermediatesArray; 
@property (nonatomic,readonly) unsigned long long intermediatesArray_Count; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (nonatomic,retain) Signature * vrfSignature; 
@property (assign,nonatomic) BOOL hasVrfSignature; 
@property (nonatomic,copy) NSData * vrfPublicKey; 
@property (assign,nonatomic) unsigned long long tltBeginningMs; 
@property (nonatomic,retain) PatInclusionProof * patConfigProof; 
@property (assign,nonatomic) BOOL hasPatConfigProof; 
@property (nonatomic,retain) LogEntry * tltConfigProof; 
@property (assign,nonatomic) BOOL hasTltConfigProof; 
+(id)descriptor;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

