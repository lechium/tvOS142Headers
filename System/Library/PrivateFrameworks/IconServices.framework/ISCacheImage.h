/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISConcreteImage.h>

@class NSUUID, NSData;

@interface ISCacheImage : ISConcreteImage {

	NSUUID* _uuid;
	NSData* _validationToken;

}

@property (retain) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL placeholder; 
@property (readonly) NSData * validationToken;              //@synthesize validationToken=_validationToken - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uuid;
-(BOOL)placeholder;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(NSData *)validationToken;
@end

