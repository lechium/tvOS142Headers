/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DeviceTypeDeviceIdentity : NSObject {

	BOOL _is_prodfused_demoted;
	BOOL _is_devfused_undemoted;
	BOOL _is_dev_board;
	BOOL _is_fpga;
	BOOL _is_ipod;
	BOOL _is_ipad;
	BOOL _is_audio_accessory;
	BOOL _has_telephony;
	BOOL _should_hactivate;
	BOOL _is_internal_build;
	BOOL _has_internal_diagnostics;
	NSString* _product_type;
	NSString* _device_class;
	NSString* _hardware_model;

}

@property (nonatomic,copy,readonly) NSString * product_type;                //@synthesize product_type=_product_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * device_class;                //@synthesize device_class=_device_class - In the implementation block
@property (nonatomic,copy,readonly) NSString * hardware_model;              //@synthesize hardware_model=_hardware_model - In the implementation block
@property (nonatomic,readonly) BOOL is_prodfused_demoted;                   //@synthesize is_prodfused_demoted=_is_prodfused_demoted - In the implementation block
@property (nonatomic,readonly) BOOL is_devfused_undemoted;                  //@synthesize is_devfused_undemoted=_is_devfused_undemoted - In the implementation block
@property (nonatomic,readonly) BOOL is_dev_board;                           //@synthesize is_dev_board=_is_dev_board - In the implementation block
@property (nonatomic,readonly) BOOL is_fpga;                                //@synthesize is_fpga=_is_fpga - In the implementation block
@property (nonatomic,readonly) BOOL is_ipod;                                //@synthesize is_ipod=_is_ipod - In the implementation block
@property (nonatomic,readonly) BOOL is_ipad;                                //@synthesize is_ipad=_is_ipad - In the implementation block
@property (nonatomic,readonly) BOOL is_audio_accessory;                     //@synthesize is_audio_accessory=_is_audio_accessory - In the implementation block
@property (nonatomic,readonly) BOOL has_telephony;                          //@synthesize has_telephony=_has_telephony - In the implementation block
@property (nonatomic,readonly) BOOL should_hactivate;                       //@synthesize should_hactivate=_should_hactivate - In the implementation block
@property (nonatomic,readonly) BOOL is_internal_build;                      //@synthesize is_internal_build=_is_internal_build - In the implementation block
@property (nonatomic,readonly) BOOL has_internal_diagnostics;               //@synthesize has_internal_diagnostics=_has_internal_diagnostics - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3 ;
-(id)copyBootArgs;
-(id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2 ;
-(id)copyBootSessionUUID;
-(BOOL)runningInRAMDisk;
-(NSString *)product_type;
-(NSString *)device_class;
-(NSString *)hardware_model;
-(BOOL)is_prodfused_demoted;
-(BOOL)is_devfused_undemoted;
-(BOOL)is_dev_board;
-(BOOL)is_fpga;
-(BOOL)is_ipod;
-(BOOL)is_ipad;
-(BOOL)is_audio_accessory;
-(BOOL)has_telephony;
-(BOOL)should_hactivate;
-(BOOL)is_internal_build;
-(BOOL)has_internal_diagnostics;
@end

