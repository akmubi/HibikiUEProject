#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Interface_TngSingleton.h"
#include "HbkGlobalEnvManager.generated.h"

class UHbkGlobalEnvManagerInstance;
class UWorld;

UCLASS(Blueprintable, Transient)
class HIBIKI_API UHbkGlobalEnvManager : public UObject, public IInterface_TngSingleton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UWorld*, UHbkGlobalEnvManagerInstance*> HbkGlobalEnvManagers;
    
public:
    UHbkGlobalEnvManager();


    // Fix for true pure virtual functions not being implemented
};

