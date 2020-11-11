/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPInitializeContainerRequest : PBRequest <NSCopying> {

	NSString* _containerName;
	NSString* _environment;
	NSString* _path;

}

@property (nonatomic,readonly) BOOL hasContainerName; 
@property (nonatomic,retain) NSString * containerName;              //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL hasEnvironment; 
@property (nonatomic,retain) NSString * environment;                //@synthesize environment=_environment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEnvironment;
-(BOOL)hasPath;
-(BOOL)hasContainerName;
@end

