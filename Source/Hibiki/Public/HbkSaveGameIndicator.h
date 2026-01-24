#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "HbkSaveGameIndicator.generated.h"

class UHbkSaveIndicatorWidget;

UCLASS(Blueprintable)
class UHbkSaveGameIndicator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSaveIndicatorWidget> IndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkSaveIndicatorWidget* IndicatorWidget;
    
public:
    UHbkSaveGameIndicator();

};

