/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSString, WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass> {

	BOOL _prefersImage;
	NSString* _errorCorrectionLevel;

}

@property (assign,nonatomic) BOOL prefersImage;                                 //@synthesize prefersImage=_prefersImage - In the implementation block
@property (nonatomic,retain) NSString * errorCorrectionLevel;                   //@synthesize errorCorrectionLevel=_errorCorrectionLevel - In the implementation block
@property (nonatomic,readonly) WFMachineReadableCode * codeObject; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)qrCodeItemWithString:(id)arg1 errorCorrectionLevel:(id)arg2 ;
-(NSString *)errorCorrectionLevel;
-(id)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(WFMachineReadableCode *)codeObject;
-(id)generateImageOfSize:(CGSize)arg1 withErrorCorrectionLevel:(id)arg2 error:(id*)arg3 ;
-(BOOL)prefersImage;
-(void)setPrefersImage:(BOOL)arg1 ;
-(void)setErrorCorrectionLevel:(NSString *)arg1 ;
@end

