/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLScatteringFunction.h>

@class MDLMaterialProperty;

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction {

	PhysicallyPlausibleDistribution* _physicalBSDF;
	MDLMaterialProperty* _subsurface;
	MDLMaterialProperty* _metallic;
	MDLMaterialProperty* _specularAmount;
	MDLMaterialProperty* _specularTint;
	MDLMaterialProperty* _roughness;
	MDLMaterialProperty* _anisotropic;
	MDLMaterialProperty* _anisotropicRotation;
	MDLMaterialProperty* _sheen;
	MDLMaterialProperty* _sheenTint;
	MDLMaterialProperty* _clearcoat;
	MDLMaterialProperty* _clearcoatGloss;

}

@property (nonatomic,readonly) long long version; 
@property (nonatomic,retain,readonly) MDLMaterialProperty * subsurface;                       //@synthesize subsurface=_subsurface - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * metallic;                         //@synthesize metallic=_metallic - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * specularAmount;                   //@synthesize specularAmount=_specularAmount - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * specularTint;                     //@synthesize specularTint=_specularTint - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * roughness;                        //@synthesize roughness=_roughness - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * anisotropic;                      //@synthesize anisotropic=_anisotropic - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * anisotropicRotation;              //@synthesize anisotropicRotation=_anisotropicRotation - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * sheen;                            //@synthesize sheen=_sheen - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * sheenTint;                        //@synthesize sheenTint=_sheenTint - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * clearcoat;                        //@synthesize clearcoat=_clearcoat - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * clearcoatGloss;                   //@synthesize clearcoatGloss=_clearcoatGloss - In the implementation block
-(id)init;
-(long long)version;
-(MDLMaterialProperty *)subsurface;
-(MDLMaterialProperty *)metallic;
-(MDLMaterialProperty *)specularAmount;
-(MDLMaterialProperty *)specularTint;
-(MDLMaterialProperty *)roughness;
-(MDLMaterialProperty *)anisotropic;
-(MDLMaterialProperty *)anisotropicRotation;
-(MDLMaterialProperty *)sheen;
-(MDLMaterialProperty *)sheenTint;
-(MDLMaterialProperty *)clearcoat;
-(MDLMaterialProperty *)clearcoatGloss;
@end
