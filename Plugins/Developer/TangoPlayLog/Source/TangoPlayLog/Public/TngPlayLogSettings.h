#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TngPlayLogSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UTngPlayLogSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StreamBufferSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TcpSendBufferSize;
    
    UTngPlayLogSettings();

};

