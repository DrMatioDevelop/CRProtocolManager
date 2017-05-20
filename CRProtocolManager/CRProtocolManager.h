//
//  CRProtocolManager.h
//  CRProtocolManager
//
//  Created by d2c_cyf on 17/3/17.
//  Copyright © 2017年 d2c_cyf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRProtocolManager : NSObject
/**
 协议管理  注册一个协议

 @param provide  协议提供者
 @param protocol 协议
 */
+ (void)registServiceProvide:(id)provide forProtocol:(Protocol *)protocol;


/**
 协议管理 获得一个协议

 @param protocol 协议的名称
 @return 协议
 */
+ (id)serviceProvideForProtocol:(Protocol *)protocol;
@end
