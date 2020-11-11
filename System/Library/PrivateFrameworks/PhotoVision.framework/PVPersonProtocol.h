/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PVPersonProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * anonymizedName; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@required
-(unsigned long long)faceCount;
-(BOOL)hidden;
-(void)setIsVerified:(BOOL)arg1;
-(BOOL)isVerified;
-(NSString *)localIdentifier;
-(void)setKeyFace:(id)arg1;
-(long long)verifiedType;
-(void)setManualOrder:(long long)arg1;
-(BOOL)favorite;
-(id<PVFaceProtocol>)keyFace;
-(long long)manualOrder;
-(NSString *)anonymizedName;
-(void)pv_addMergeCandidatePersons:(id)arg1;
-(id)personLocalIdentifiers;

@end

