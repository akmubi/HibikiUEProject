#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TngGameSingleton.generated.h"

class UHbkGlobalEnvManager;
class UHbkGraphicsManager;
class UHbkLightingManager;

UCLASS(Blueprintable)
class HIBIKI_API UTngGameSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGraphicsManager* GraphicsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGlobalEnvManager* GlobalEnvManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkLightingManager* LightingManager;
    
public:
    UTngGameSingleton();

};

