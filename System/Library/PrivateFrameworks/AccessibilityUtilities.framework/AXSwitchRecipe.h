/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSUUID, NSArray;

@interface AXSwitchRecipe : NSObject {

	NSString* _name;
	NSUUID* _uuid;
	NSArray* _mappings;
	double _timeout;
	NSString* _unlocalizedName;
	NSString* _menuIconIdentifier;

}

@property (nonatomic,retain) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * mappings;                         //@synthesize mappings=_mappings - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * unlocalizedName;                 //@synthesize unlocalizedName=_unlocalizedName - In the implementation block
@property (nonatomic,readonly) BOOL shouldContinueScanning; 
@property (nonatomic,copy) NSString * menuIconIdentifier;                //@synthesize menuIconIdentifier=_menuIconIdentifier - In the implementation block
+(id)recipeWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(id)dictionaryRepresentation;
-(double)timeout;
-(NSUUID *)uuid;
-(NSString *)unlocalizedName;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSArray *)mappings;
-(void)setMappings:(NSArray *)arg1 ;
-(void)setMenuIconIdentifier:(NSString *)arg1 ;
-(NSString *)menuIconIdentifier;
-(BOOL)shouldContinueScanning;
@end

