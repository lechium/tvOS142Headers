/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, NSNumber;

@interface NMSSHHostConfig : NSObject {

	NSArray* _hostPatterns;
	NSString* _hostname;
	NSString* _user;
	NSNumber* _port;
	NSArray* _identityFiles;

}

@property (nonatomic,retain) NSArray * hostPatterns;               //@synthesize hostPatterns=_hostPatterns - In the implementation block
@property (nonatomic,retain) NSString * hostname;                  //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain) NSString * user;                      //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSNumber * port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSArray * identityFiles;              //@synthesize identityFiles=_identityFiles - In the implementation block
-(id)init;
-(NSNumber *)port;
-(NSString *)user;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(NSString *)hostname;
-(void)mergeFrom:(id)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(id)arrayByRemovingDuplicateElementsFromArray:(id)arg1 ;
-(id)mergedArray:(id)arg1 withArray:(id)arg2 ;
-(NSArray *)hostPatterns;
-(void)setHostPatterns:(NSArray *)arg1 ;
-(NSArray *)identityFiles;
-(void)setIdentityFiles:(NSArray *)arg1 ;
@end

