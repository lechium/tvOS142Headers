/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFImage.h>
#import <libobjc.A.dylib/SFLocalImage.h>
@class NSDictionary, NSData;


@protocol SFLocalImage <SFImage>
@property (assign,nonatomic) int localImageType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(int)localImageType;
-(void)setLocalImageType:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFLocalImage : SFImage <SFLocalImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _localImageType;

}

@property (assign,nonatomic) int localImageType;                                     //@synthesize localImageType=_localImageType - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int cornerRoundingStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(int)localImageType;
-(void)setLocalImageType:(int)arg1 ;
-(BOOL)hasLocalImageType;
@end

