/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ML3AccountCacheEntry : NSObject {

	NSString* _appleID;
	NSString* _altDSID;

}

@property (nonatomic,retain) NSString * appleID;              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * altDSID;              //@synthesize altDSID=_altDSID - In the implementation block
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
@end

