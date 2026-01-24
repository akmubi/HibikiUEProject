#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Interface_TngSingleton.h"
#include "HbkGraphicsManager.generated.h"

class UHbkGraphicsManagerInstance;
class UWorld;

UCLASS(Blueprintable, Transient)
class UHbkGraphicsManager : public UObject, public IInterface_TngSingleton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UWorld*, UHbkGraphicsManagerInstance*> HbkGraphicsManagers;
    
public:
    UHbkGraphicsManager();


    // Fix for true pure virtual functions not being implemented
};

