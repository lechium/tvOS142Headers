/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MSASAssetCollectionChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ctag;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                         //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(id)description;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(BOOL)wasDeleted;
-(void)setWasDeleted:(BOOL)arg1 ;
@end

